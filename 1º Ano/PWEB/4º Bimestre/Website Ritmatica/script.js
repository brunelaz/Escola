document.addEventListener('DOMContentLoaded', () => {
  const membros = [
    { 
      nome: "Bruno Lacerda", 
      cargo: "Desenvolvedor WEB e Programação", 
      github: "https://github.com/brunelaz" 
    },
    { 
      nome: "Fernando Akira", 
      cargo: "Programador Principal e Gameplay", 
      github: "https://github.com/Akirakub" 
    },
    { 
      nome: "Eduardo Feitosa", 
      cargo: "Músicas, Sprites e Programação", 
      github: "https://github.com/3feitosa" 
    },
    { 
      nome: "Arthur Muller", 
      cargo: "Documentação", 
      github: "https://github.com/" 
    },
    { 
      nome: "Arthur Moreira", 
      cargo: "Documentação", 
      github: "https://github.com/" 
    }
  ];

  const track = document.getElementById('carousel-track');
  const btnPrev = document.querySelector('.prev-btn');
  const btnNext = document.querySelector('.next-btn');

  if (!track || !btnPrev || !btnNext) return;

  // Criação dinâmica dos cards como elementos <a> (links)
  membros.forEach((membro, index) => {
    const card = document.createElement('a');
    card.classList.add('carousel-card');
    card.dataset.index = index;
    card.href = membro.github;
    card.target = "_blank";
    card.rel = "noopener noreferrer";

    card.innerHTML = `
      <div class="carousel-avatar"></div>
      <h3>${membro.nome}</h3>
      <p>${membro.cargo}</p>
    `;
    track.appendChild(card);
  });

  const cards = document.querySelectorAll('.carousel-card');
  const totalCards = cards.length;
  let currentIndex = 3; // POSIÇÃO INICIAL DO CARROSSEL

  function updateCarousel() {
    cards.forEach((card, i) => {
      card.classList.remove('active', 'prev', 'next');
     
      const prevIndex = (currentIndex - 1 + totalCards) % totalCards;
      const nextIndex = (currentIndex + 1) % totalCards;

      if (i === currentIndex) {
        card.classList.add('active');
      } else if (i === prevIndex) {
        card.classList.add('prev');
      } else if (i === nextIndex) {
        card.classList.add('next');
      }
    });
  }

  // Navegação pelos botões
  btnNext.addEventListener('click', (e) => {
    e.preventDefault(); 
    currentIndex = (currentIndex + 1) % totalCards;
    updateCarousel();
  });

  btnPrev.addEventListener('click', (e) => {
    e.preventDefault();
    currentIndex = (currentIndex - 1 + totalCards) % totalCards;
    updateCarousel();
  });

  // GERENCIADOR DE CLIQUES DO CARD LATERAL DO CARROSSEL
  cards.forEach((card) => {
    card.addEventListener('click', (e) => {
      if (card.classList.contains('prev')) {
        e.preventDefault();
        currentIndex = (currentIndex - 1 + totalCards) % totalCards;
        updateCarousel();
      } else if (card.classList.contains('next')) {
        e.preventDefault();
        currentIndex = (currentIndex + 1) % totalCards;
        updateCarousel();
      }
    });
  });

  updateCarousel();
});